function mathEngine(array) {
  let product = 1;
  let sum = 0;
  if (array === null) {
    return 0;
  }
  for (let i = 0; i < array.length; i++) {
    if (array[i] < 0) {
      sum += array[i];
    } else {
      product *= array[i];
    }
  }
  return sum + product;
}
