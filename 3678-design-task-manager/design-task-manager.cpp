class TaskManager {
public:
    struct task {
        int userId;
        int taskId;
        int priority;
    };
    map<int, task> mp;

    struct Compare {
        bool operator()(const task& a, const task& b) {
            if (a.priority == b.priority) {
                return a.taskId <= b.taskId;
            }
            return a.priority < b.priority;
        }
    };
    priority_queue<task, vector<task>, Compare> pq;

    TaskManager(vector<vector<int>>& tasks) {
        for (int i = 0; i < tasks.size(); i++) {
            add(tasks[i][0], tasks[i][1], tasks[i][2]);
        }
    }

    void add(int userId, int taskId, int priority) {
        pq.push({userId, taskId, priority});
        mp[taskId] = {userId, taskId, priority};
    }

    void edit(int taskId, int newPriority) {
        int uid = mp[taskId].userId;
        mp.erase(taskId);
        mp[taskId] = {uid, taskId, newPriority};
        pq.push({uid, taskId, newPriority});
    }

    void rmv(int taskId) { mp.erase(taskId); }

    int execTop() {
        int id = -1;
        while (!pq.empty()) {
            if (mp.count(pq.top().taskId) > 0 &&
                pq.top().priority == mp[pq.top().taskId].priority) {
                id = pq.top().userId;
                mp.erase(pq.top().taskId);
                pq.pop();
                break;

            } else {
                pq.pop();
                continue;
            }
        }
        return id;
    }
};

/**
 * Your TaskManager object will be instantiated and called as such:
 * TaskManager* obj = new TaskManager(tasks);
 * obj->add(userId,taskId,priority);
 * obj->edit(taskId,newPriority);
 * obj->rmv(taskId);
 * int param_4 = obj->execTop();
 */