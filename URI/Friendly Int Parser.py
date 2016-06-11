def convert(s):
    ans = ""
    for i in range(len(s)):
        if s[i] == 'l':
            ans += '1'
        elif s[i] == 'o' or s[i] == 'O':
            ans += '0'
        else: ans += s[i]
    return ans
    
def check(s):
    alpha = "abcdefghijklmnopqrstuvwxyz"
    for i in range(len(s)):
        if s[i].lower() in alpha:
            return False
    return True

def extract(s):
    digits = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']
    ans = ""

    for i in range(len(s)):
        if s[i] in digits:
            ans += s[i]
    return ans

n = ""
while True:
    try:
        n = raw_input()
        n = convert(n)
        
        if check(n):
            n = extract(n)
            if (len(n) <= 0 or n == ''):
                print "error"
            elif (int(n) > 2147483647 or int(n) < 0):
                print "error"
            else:
                print int(n)
        else: print "error"
    except (EOFError):
        break
