/**
 * @param {number} millis
 * @return {Promise}
 */
var sleep = function(millis) {
    return new Promise(resolve => setTimeout(resolve, millis));
};
