let count = readLine()!
let inputArr = readLine()!.split(separator: " ") 
let numScore = inputArr.map{Int($0)!}
let maxScore = Double(numScore.max()!)
var sum : Double = 0;

for score in numScore {
    sum += Double(score) / maxScore * 100
}

print(sum / Double(numScore.count))