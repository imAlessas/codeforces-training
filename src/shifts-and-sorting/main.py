'''
    Author:     @imAlessas
    Problem:    1969B - Shifts and Sorting
                https://codeforces.com/problemset/problem/1969/B
'''

def main():

    for _ in range(int(input())):

        s = input()

        zeros = s.count('0')

        count = 0
        count_dict = { '0' : 0, '1' : 0 }

        for c in s:
            count_dict[c] += 1

            if c == '0':
                count += (1 if count_dict['1'] > 0 else 0)
            else:
                count += zeros - count_dict['0']

        print(count)





if __name__ == "__main__":
    main()
