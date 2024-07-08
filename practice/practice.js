// function missingNumber(n, arr) {
//   let s = (n * (n + 1)) / 2; // Calculate the sum of first n natural numbers

//   let sum = 0; // Calculate the sum of elements in the array

//   for (let ar of arr) {
//     sum += ar;
//   } // Return the missing number

//   return s - sum;
// }

let a = [1, 2, 3, 2, 5, 2],
  arr = [];

let b = [2];

a.forEach((e) => {
  if (e !== b[0]) {
    arr.push(e);
  }
});

console.log(arr);
