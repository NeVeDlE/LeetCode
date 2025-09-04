/**
 * @param {number} x
 * @param {number} y
 * @param {number} z
 * @return {number}
 */
var findClosest = function(x, y, z) {
    
const first=Math.abs(x-z);
const second =Math.abs(y-z);
if(first===second)return 0;
return first<second?1:2;

};