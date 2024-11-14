'''
    Author:     @imAlessas
    Problem:    1971C - Clock and Strings
                https://codeforces.com/problemset/problem/1971/C
'''

def main():

    for _ in range(int(input())):

        a, b, c, d = [int(item) for item in input().split()]

        min_alice = min(a, b)
        max_alice = max(a, b)

        min_bob = min(c, d)
        max_bob = max(c, d)

        intersection_conditions = (
            not ( ( min_alice < min_bob and max_alice > max_bob ) or ( min_bob < min_alice and max_bob > max_alice ) )
            and
            not ( (max_alice < min_bob) or (max_bob < min_alice) )
            and
            ( ( min_alice < min_bob and max_alice < max_bob ) or ( min_bob < min_alice and max_bob < max_alice ) )

        )

        if intersection_conditions == True:
            print("YES")
        else:
            print("NO")





if __name__ == "__main__":
    main()
