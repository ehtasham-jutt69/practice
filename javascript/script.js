let st="aaa";
// st=st+3;
// console.log(typeof(st));
const obj={
a:12,
"ali":"saad",
c:"hkk",
d:undefined


}
// you can also define an key outside the class
obj['f']="newww";   
// you can also reassign a value to key 
obj.ali=10;
console.log(obj);


//let colors = ["red", "green", "blue"];

//for (let index in colors) {
 // console.log(index , colors[index]);        // prints indexes (0, 1, 2)
  //console.log(colors[index]); // prints values (red, green, blue)
//}


// let fruit = ["apple", "banana", "mango"];

// for (let c of fruit) {
//   console.log(c);
// }

// its an array 
const fruit = [
    { name: "apple", price: 50 },
     {name: "banana", price: 30 },
     {name: "mango", price: 100} 
];
  
  
  for (let f in fruit) {
    console.log(f);
  }
  

