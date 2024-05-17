def find_sum(arr):
    return sum(arr)

def find_average(arr):
    return sum(arr) / len(arr)

def find_mean(arr):
    return find_average(arr)

def find_max_element(arr):
    return max(arr)

def find_min_element(arr):
    return min(arr)

# Example usage:
my_list = [5, 2, 7, 1, 9, 3, 6, 8, 4]
print("List:", my_list)
print("Sum:", find_sum(my_list))
print("Average:", find_average(my_list))
print("Mean:", find_mean(my_list))
print("Maximum element:", find_max_element(my_list))
print("Minimum element:", find_min_element(my_list))
