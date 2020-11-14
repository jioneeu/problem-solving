/**
 * Runtime: 68 ms, faster than 95.34%
 * Memory Usage: 38.6 MB, less than 24.72%
 */
var defangIPaddr = function(address) {
    const regex = /\./gi;
    return address.replace(regex, '[.]');
};
