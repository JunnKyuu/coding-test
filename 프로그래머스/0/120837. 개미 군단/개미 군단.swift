import Foundation

func solution(_ hp:Int) -> Int {
    var general = hp / 5
    var soldier = (hp - (general * 5)) / 3
    var worker = (hp - (general * 5 + soldier * 3))
    
    var answer = general + soldier + worker
    
    return answer
}