
/**
 * @param {number[]} nums
 * @return {number}
 */
var xorBeauty = function (nums) {
    return nums.reduce((x, y) => x ^ y);
};
