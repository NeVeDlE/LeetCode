
class Solution {

    /**
     * @param String $s1
     * @param String $s2
     * @return String[]
     */
    function uncommonFromSentences($s1, $s2) {
         $map = [];
        $temp = "";
        
        $words1 = explode(' ', $s1);
        foreach ($words1 as $word) {
            if (!isset($map[$word])) {
                $map[$word] = 0;
            }
            $map[$word]++;
        }
        
        $words2 = explode(' ', $s2);
        foreach ($words2 as $word) {
            if (!isset($map[$word])) {
                $map[$word] = 0;
            }
            $map[$word]++;
        }

        $ans = [];
        foreach ($map as $word => $count) {
            if ($count == 1) {
                $ans[] = $word;
            }
        }
        
        return $ans;
    }
}