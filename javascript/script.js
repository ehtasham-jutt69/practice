// let st="aaa";
// st=st+3;
// console.log(typeof(st));
// const obj={
// a:12,
// "ali":"saad",
// c:"hkk",
// d:undefined


// }
// // you can also define an key outside the class
// obj.f=`newww`;   
// // you can also reassign a value to key 
// obj.ali=10;
// console.log(obj);


// let colors = ["red", "green", "blue"];

// for (let i in colors) {
//  //console.log(i , colors[i]);        // prints indexes (0, 1, 2)
//   console.log(colors[i]); // prints values (red, green, blue)
// }



// const student={
//   "name":`Ali` ,
//   age: 14,
//   marks:[12 , 10 ,15],

// }

// for(let index of student)
// {
//   console.log( index)
// }
let t=0;

let fruit = [
  { name:"apple" , price :12}  , 
  { name : "banana"  , price:15 } ,
  {name: "mango" , price :18} 
];
for (let c of fruit) {
  t+=c.price;
  console.log( c);
  console.log(c.name  + c.price);
}
console.log(t);

// // its an array 
// const fruits = [
//     { name: "apple", price: 50 },
//      {name: "banana", price: 30 },
//      {name: "mango", price: 100} 
// ];
  
  
//   for (let f in fruit) {
//     console.log(f);
//   }
  

// // function to count vovel in string 
// let namesss = prompt("Enter a string:");
// console.log(namess)

// let vovel = (st) => {
//   let count = 0;
//   // Loop through each character in the string
//   for (let char of st) {
//     // Check if the character is a vowel
//     if (char === 'a' || char === 'e' || char === 'i' || char === 'o' || char === 'u' ||
//         char === 'A' || char === 'E' || char === 'I' || char === 'O' || char === 'U') {
//       count++;
//     }
//   }
//   return count;
// };

// // console.log("Vowel count: " + vovel(namess)); // Output the result
// const prompt=require("prompt-sync")();
// let namess = prompt("Enter a string:");
//  console.log(namess)


// var sent = "this is a me ehtasham";
// var w = "s";

// console.log(`This word ${w + "hello" } is ${sent.includes(w) ? "available" : "not available"} in ${sent}`);



var nums =[1,2,3,4,5,6,7];
function dub(num){
 return num.map(n=>
  {return(n*2)});
}
let aa=dub(nums);
console.log(aa);
