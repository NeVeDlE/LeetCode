class Solution {

    /**
     * @param Integer $x
     * @param Integer $y
     * @param Integer $z
     * @return Integer
     */
    function findClosest($x, $y, $z) {
        $first=abs($x-$z);
        $second=abs($y-$z);
        if($first==$second)return 0;
        return $first<$second?1:2;
    }
}