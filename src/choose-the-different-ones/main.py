'''
    Author:     @imAlessas
    Problem:    1927C - Choose the Different Ones!
                https://codeforces.com/problemset/problem/1927/C
'''

# Function definition

def check(a, b, k):

    indexes = [0, 0]
    left_space = [k/2, k/2]

    for item in range(1, k + 1):

        found = [False, False]


        # Find 'n' in vector a
        while indexes[0] < len(a) and a[indexes[0]] <= item and left_space[0] > 0:
            found[0] = (a[indexes[0]] == item)
            indexes[0] += 1

        # Find 'n' in vector b
        while indexes[1] < len(b) and b[indexes[1]] <= item and left_space[1] > 0:
            found[1] = (b[indexes[1]] == item)
            indexes[1] += 1
        

        # Decide from where to pick the number
        if found[0] == found[1] == True:
            if left_space[0] > left_space[1]:
                left_space[0] -= 1
            else:
                left_space[1] -= 1
        elif found[0] == True:
            left_space[0] -= 1
        elif found[1] == True:
            left_space[1] -= 1

        if not found[0] and not found[1]:
            return False
        
    return True





def main():

    for _ in range(int(input())):

        _, _, k = map(int, input().split())

        # Store and sort the arrays
        a = sorted([int(item) for item in input().split()])
        b = sorted([int(item) for item in input().split()])

        check(a, b, k)            





if __name__ == "__main__":
    main()


# 2 2 2
# 4 1
# 1 2