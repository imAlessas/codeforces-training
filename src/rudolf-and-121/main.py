'''
    Author:     @imAlessas
    Problem:    1941B - Rudolf and 121
                https://codeforces.com/problemset/problem/1941/B
'''



def main():

    for _ in range(int(input())):

        n = int(input())
        a = [int(item) for item in input().split()]


        # Process 1-2-1 operation
        if a[1] < (a[0] * 2) or a[-2] < (a[-1] * 2):
            print("NO")
            continue

        for i in range(1, n - 1):
            a[i] -= 2 * a[i - 1]
            a[i + 1] -= a[i - 1]
            a[i - 1] = 0
        

        if sum(abs(item) for item in a) == 0:
            print("YES")
        else:
            print("NO")



if __name__ == "__main__":
    main()
