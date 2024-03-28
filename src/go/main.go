package main

import "fmt"

func main() {
	fmt.Println(twoSum([]int{-100, 109, 1, 2, 3}, 9))
	fmt.Println(twoSum([]int{3, 2, 4}, 6))
	fmt.Println(twoSum([]int{3, 3}, 6))
}

func twoSum(nums []int, target int) []int {
	var result []int = make([]int, 2)
	var positions map[int]int = make(map[int]int)
	var dummy []int

	for i := 0; i < len(nums); i++ {
		positions[nums[i]] = i
		if nums[i]+nums[i] == target {
			dummy = append(dummy, i)
			if len(dummy) == 2 {
				result = dummy
				break
			}
		}
		if val, ok := positions[target-nums[i]]; ok && val != i {
			result[0] = positions[nums[i]]
			result[1] = positions[target-nums[i]]
			break
		}
	}

	return result
}
