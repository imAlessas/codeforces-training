'''
    Author:     @imAlessas
    Problem:    1927C - Choose the Different Ones!
                https://codeforces.com/problemset/problem/1927/C
'''

def main():

    for _ in range(int(input())):

        _, _, k = map(int, input().split())

        # Store and sort the arrays
        b = [int(item) for item in input().split()]
        a = [int(item) for item in input().split()]

        occ = [0, 0, 0]
        

        for item in range(1, k + 1):

            found = [item in a, item in b]
            
            if found[0] and found[1]:
                occ[2] += 1
            elif found[0]:
                occ[0] += 1
            elif found[1]:
                occ[1] += 1
            
        if occ[0] > k/2 or occ[1] > k/2 or sum(occ) != k:
            print('NO')
        else:
            print('YES')





if __name__ == "__main__":
    main()
