def split(word):
    # split string into list of chars
    # https://www.geeksforgeeks.org/python-split-string-into-list-of-characters/
    return [char for char in word]


symmetricLetters = ['A', 'H', 'I', 'O', 'W', 'V', 'M', 'T', 'U', 'X']
symmetricPairs = [('9', 'P'), ('A', 'A'), ('O', 'O'), ('J', 'L')]

failed = False

inputString = "NATTAN"
inputStringList = split(inputString)

if len(inputString) % 2 == 0:
    # if even
    for i in range(int(len(inputString)/2)):
        # go through each letter of string until it gets to half point
        if not failed:
            pairFound = False
            for j in range(len(symmetricPairs)):
                # go through each symmetric pair and try to find a match
                firstLetter = inputStringList[i]
                lastLetter = inputStringList[len(inputString) - 1 - i]
                pair1 = symmetricPairs[j][0]
                pair2 = symmetricPairs[j][1]

                if (firstLetter == pair1 and lastLetter == pair2) or (lastLetter == pair1 and firstLetter == pair2):
                    pairFound = True
                    break
            if not pairFound:
                failed = True
                break
else:
    # if odd: pretty much use the even algorithm, but just check if the single letter in the middle is symmetric
    for i in range(int(len(inputString)/2)):
        # go through each letter of string until it gets to half point
        if not failed:
            pairFound = False
            for j in range(len(symmetricPairs)):
                # go through each symmetric pair and try to find a match
                firstLetter = inputStringList[i]
                lastLetter = inputStringList[len(inputString) - 1 - i]
                pair1 = symmetricPairs[j][0]
                pair2 = symmetricPairs[j][1]

                if (firstLetter == pair1 and lastLetter == pair2) or (lastLetter == pair1 and firstLetter == pair2):
                    pairFound = True
                    break
            if not pairFound:
                failed = True
                break

    middleLetterIsSymmetric = False
    for i in range(len(symmetricLetters)):
        # find if middle letter is a symmetric letter. middle letter of an odd length string can be found by using the "div" operator. cse15 y'all already know
        if inputStringList[len(inputString) // 2] == symmetricLetters[i]:
            middleLetterIsSymmetric = True
            break
    if not middleLetterIsSymmetric:
        failed = True

if not failed:
    print("true")
else:
    print("false")
