let input = readLine()!
let stringArr = input.split(separator: " ")
let year = Int(stringArr[0])!

if(year % 4 == 0) {
   if((year % 100 != 0) || (year % 400 == 0)) {
       print("1")
   } else {
       print("0")
   }
} else {
    print("0")
}

