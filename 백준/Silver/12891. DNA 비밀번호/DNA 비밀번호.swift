import Foundation

func findValidPasswords() {
    let input = readLine()!.split(separator: " ").map { Int($0)! }
    let s = input[0]  // DNA 문자열의 길이
    let p = input[1]  // 비밀번호로 사용할 부분 문자열의 길이

    let dna = Array(readLine()!)  // DNA 문자열
    let requiredCounts = readLine()!.split(separator: " ").map { Int($0)! }  // A, C, G, T의 최소 개수

    // 각 문자의 개수를 저장할 배열
    var currentCounts = [Int](repeating: 0, count: 4)
    var validPasswordCount = 0

    // Helper function to convert DNA character to index in the array
    func charToIndex(_ char: Character) -> Int {
        switch char {
        case "A": return 0
        case "C": return 1
        case "G": return 2
        case "T": return 3
        default: return -1
        }
    }

    // 초기 윈도우 설정
    for i in 0..<p {
        let index = charToIndex(dna[i])
        currentCounts[index] += 1
    }

    // 조건을 만족하는지 확인하는 함수
    func isValid() -> Bool {
        for i in 0..<4 {
            if currentCounts[i] < requiredCounts[i] {
                return false
            }
        }
        return true
    }

    // 첫 번째 윈도우 체크
    if isValid() {
        validPasswordCount += 1
    }

    // 슬라이딩 윈도우 진행
    for i in p..<s {
        let newCharIndex = charToIndex(dna[i])  // 새로 들어온 문자
        let oldCharIndex = charToIndex(dna[i - p])  // 빠져나가는 문자

        // 새로 들어온 문자 추가하고, 빠져나가는 문자 제거
        currentCounts[newCharIndex] += 1
        currentCounts[oldCharIndex] -= 1

        // 조건을 만족하면 카운트 증가
        if isValid() {
            validPasswordCount += 1
        }
    }

    // 결과 출력
    print(validPasswordCount)
}

// 실행
findValidPasswords()
