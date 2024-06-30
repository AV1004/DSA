function missingNumber(n, arr) {
  let s = (n * (n + 1)) / 2; // Calculate the sum of first n natural numbers

  let sum = 0; // Calculate the sum of elements in the array

  for (let ar of arr) {
    sum += ar;
  } // Return the missing number

  return s - sum;
}
