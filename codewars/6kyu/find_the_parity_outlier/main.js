const find_outlier = (integers) => {
  let even = [];
  let odd = [];
  for (let i = 0; i < integers.length; i++) {
    if (integers[i] % 2 == 0) {
      even.push(integers[i]);
    } else {
      odd.push(integers[i]);
    }
  }
  if (even.length > odd.length) {
    return odd[0];
  } else {
    return even[0];
  }
};

// find_outlier([160, 3, 1719, 19, 11, 13, -21]);
console.log(find_outlier([2, 4, 0, 100, 4, 11, 2602, 36]));
