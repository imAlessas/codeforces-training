'''
    Author:     @imAlessas
    Problem:    1969B - Shifts and Sorting
                https://codeforces.com/problemset/problem/1969/B
'''

# Function definition



# Take the last characted and shift it at idx=0
def cycle_string(substr):
    return substr[-1] + substr[:-1]


# Checks if the string is sorted
def is_sorted(s):
    for i in range(1, len(s)):
        if s[i - 1] > s[i]:
            return False
        
    return True






def main():

    for _ in range(int(input())):

        s = input()

        count = 0
        for i in range(len(s) - 1):
            
            if is_sorted(s):
                break

            if s[i] == '1':

                j = i

                # Get to the first 0
                while j < len(s) and s[j] != '0':
                    j += 1
                j += 1

                count += j - i

                # Cycle the string
                s = s[:i] + cycle_string(s[i : j]) + s[j:]

        print(count)





if __name__ == "__main__":
    main()
