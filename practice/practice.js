const Promise = require("bluebird");

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

// function mainFunction(callback) {
//   console.log("Performing operation...");
//   // Use setTimeout to simulate an asynchronous operation
//   callback("beforeSetTimeout");
//   setTimeout(function () {
//     callback("Operation complete");
//   }, 5000);
//   callback("afterSetTimeout");
// }

// // Define the callback function
// function callbackFunction(result) {
//   console.log("Result: " + result);
// }

// // Call the main function with the callback function
// mainFunction(callbackFunction);

// let promise = new Promise(function (resolve, reject) {
//   const x = "geeksforgeeks";
//   const y = "geeksforgeeks";
//   if (x === y) {
//     resolve();
//   } else {
//     reject();
//   }
// });

// promise
//   .then(function () {
//     console.log("Success, You are a GEEK");
//   })
//   .catch(function () {
//     console.log("Some error has occurred");
//   });

// let promise = new Promise(function (resolve, reject) {
//   const x = "geeksforgeeks";
//   const y = "geeksforgeeks";
//   if (x === y) {
//     resolve();
//   } else {
//     reject();
//   }
// });

// promise
//   .then(function () {
//     console.log("promise 1 is resolved");
//     const p1 = new Promise((resolve, reject) => {
//       resolve(40);
//     });
//     return p1;
//   })
//   .then((value) => {
//     console.log(value);
//     console.log("promise 2 is resolved");
//   })
//   .catch(function () {
//     console.log("Some error has occurred");
//   });

// const items = [1, 2, 3, 4, 5];

// Promise.each(items, (item) => {
//   // Perform an asynchronous operation for each item
//   return new Promise((resolve) => {
//     setTimeout(() => {
//       console.log(item);
//       resolve();
//     }, 2000);
//   });
// })
//   .then(() => {
//     console.log("All items processed.");
//   })
//   .catch((error) => {
//     console.error(error);
//   });

// console.log(+"10" - 5);

console.log(2 ** 2);
