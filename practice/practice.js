// // function missingNumber(n, arr) {
// //   let s = (n * (n + 1)) / 2; // Calculate the sum of first n natural numbers

// //   let sum = 0; // Calculate the sum of elements in the array

// //   for (let ar of arr) {
// //     sum += ar;
// //   } // Return the missing number

// //   return s - sum;
// // }

// let a = [1, 2, 3, 2, 5, 2],
//   arr = [];

// let b = [2];

// a.forEach((e) => {
//   if (e !== b[0]) {
//     arr.push(e);
//   }
// });

// a.reverse();

// console.log(a);

// let a;
// console.log(a);

// let x = 10;
// let y = 2;

// console.log((x **= y));

// const fruits = ["Banana", "Orange", "Apple", "Mango"];
// const f = fruits.entries();

// for (let x of f) {
//   console.log(x + " ");
// }

function mainFunction(callback) {
  console.log("Performing operation...");
  // Use setTimeout to simulate an asynchronous operation
  callback("beforeSetTimeout");
  setTimeout(function () {
    callback("Operation complete");
  }, 5000);
  callback("afterSetTimeout");
}

// Define the callback function
function callbackFunction(result) {
  console.log("Result: " + result);
}

// Call the main function with the callback function
mainFunction(callbackFunction);
