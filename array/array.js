let array=["abc" , "aaa" ,"hello"]
array.unshift("ssss");

array.map(function(index , val) 
{
    val+=12;
 console.log(index + ": " + val );

});
