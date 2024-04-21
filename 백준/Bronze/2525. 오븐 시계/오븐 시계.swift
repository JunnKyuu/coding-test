let line = readLine()!
let lineArr = line.split(separator: " ")
let time = Int(readLine()!)!

var hour = (Int)(lineArr[0])!
var minute = (Int)(lineArr[1])!

var addH: Int
var addM: Int

addH = time / 60
addM = time % 60

hour = hour + addH
minute = minute + addM

addH = minute / 60
addM = minute % 60

hour += addH
minute = addM

if hour >= 24 {
    hour = hour - 24
}


print("\(hour) \(minute)")