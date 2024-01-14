
import re

while True:
    try:
        s=input()
        if s=="-1": break
        s=re.sub("\s+", " ", s)
        s=s.replace(" .", ".")
        s=s.replace(" !", "!")
        s=s.replace(" ?", "?")

        s=s.strip().lower()
        s=s[0:1].upper()+s[1:]

        c=s[len(s)-1:]
        if c!="." and c!="!" and c!="?": s+="."

        print(s)
    except:
        break



