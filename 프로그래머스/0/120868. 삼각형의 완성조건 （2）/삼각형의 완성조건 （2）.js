function solution(sides) {
    var answer = 0;
    sides.sort((a,b) => a-b);
    
    var a = sides[0]
    var b = sides[1]
    var c = b + 1
    
    // b가 최대일 때
    for (let i = 1; i < b + 1; i ++) {
        if (a + i > b) {
            answer += 1
        }
    }
    
    // c가 최대일 때
    while(a + b > c) {
        answer += 1
        c += 1
    }
    
    console.log(answer)
    
    return answer;
}