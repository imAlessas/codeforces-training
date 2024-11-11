'''
    Author:     @imAlessas
    Problem:    1969B - Shifts and Sorting
                https://codeforces.com/problemset/problem/1969/B
'''

# Function definition


# Take the last characted and shift it at idx=0
def cycle_string(substr):
    return substr[-1] + substr[:-1]



def main():

    for _ in range(int(input())):

        s = input()

        count = 0
        for i in range(len(s) - 1):
            
            if s[i] == '1':

                j = i

                # Get to the first 0
                while j < len(s) - 1 and s[j] != '0':
                    j += 1


                if j == len(s)-1 and s[j] == '1':
                    break

                count += j - i + 1

                # Cycle the string
                j += 1
                s = s[:i] + cycle_string(s[i : j]) + s[j:]

        print(count)





if __name__ == "__main__":
    main()
