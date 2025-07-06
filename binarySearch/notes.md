#### Binary Search:-
Toh binary search me hum target element ko find karte hain sorted array me se by getting the mid value mid value find karne ke baad teen conditions hoti hain. Isme kuch variables hote hain jaise

low -> Starting index jise har iteration ke baad update karte hain agar mid ki value target se choti hui toh.

high -> Ending index jise har iteration ke baad update karte hain agar mid ki value target se badi hui toh.

mid -> Ye index hai jisse low aur high ki help ke update karte hain

mid = (low + high)/2 or low + (high-low)/2

a.Mid value Target value se match kar jaaye-> Is case me hum value ko return kar denge.

    arr[mid]==target -> True

b.Mid value target value se choti ho->Is case me hum low ko mid+1 ke barabar kar dete hain aur phir se binary search lagate hain.

    low = mid+1;
    high -> Same;

c.Mid value target value se badi ho->Is case me hum high ko mid-1 ke barabar kar dete hain aur phir se binary search lagate hain.

    high = mid-1;
    low -> same;

note:- Ek condition hamesha lagegi jo hai while(low<=high) kyuki agar low high se bada hogya iska mtlb hai ki value array me exist hi nahi karti.

## 1.First and Last occurence:-

Isme hume ek array diya hoga jisme single ya multiple target value di rhegi, hume array me uss target value ki first occurence aur last occurence batani hai.

first Occurence ke liye hum kya kar sakte hain

Steps:-

1.Humne target element find kiya yaha tak basic binary search laga ab yha se hmara main logic start hoga.

2.Iske baad jo high hai usse humne mid ke barabar kardiya isse ab humara scope ab chota hogya hai aur agar mid ke baad bhi agar target values hui toh bhi hume uski zarurat nhi kyuki hume abhi first occurence nikalni hai.
 high = mid

3.Ab humne wapas mid nikala aur uski value check kari agar target value ke barabar aagyi toh wapas high ke equal kardo agar nhi toh low ki value me mid ki value + 1 assign kardo aur uska index check karo.
 low = mid + 1;

4.Agar value mid+1 ke equal aagyi toh high ke equal karo

## 2.Peak Value in Mountain Array

Iss problem me ek peak value hogi array me beech me kahi par uss peak value tak starting se increasing order me values hain peak value ke baad wapas se values decreasing order me chlte jaati hain array ke end tak.

isme binary search ka use karke peak value find karni hai, usko find karne ke liye bas ek cheeze dekhni hai ki target value apne dono adjacent values se badi ho mtlb.

arr[mid]>arr[mid-1] && arr[mid] > arr[mid+1] ye condition ki wajah se apan find kar skte hain peak value


## 3.Pivot Index

Pivot index find karne ke liye apan leftsum aur right sum calculate karte hain aur agar dono equal hojayein toh mid ki jo value hai usse return kardete hain

isme agar equal na ho toh 2 conditions lagti hain

1.leftSum is less than rightsum:-
Iss condition me hume mid ko binary search ki help se right ki taraf shift karna hoga uske liye hum mid ki nayi value calculate karenge jisme mid = mid + (high - mid)/2 karenge hum aur dobara se sum calculate karenge

2.leftSum is greater than rightsum:-
Iss condition me hume mid ko left ki taraf shift karna hoga aur uske liye 


## 4. Pivot in Array.
Observations:-
1.The values on index after the index of peak value in the array will always less than first index and last index value of the array.
2.The value on index value before the peak index value will always be grater than value of first and last index of the array.
3.The pivot index value will always be less than both of its neighbours and the peak index value will always be greater than both of its neighbours.
4.The rest of the elements will be greater than their previous and less than their subsequent element.

## 5.Search in a Rotated Sorted Array
To tackle this problem we can use binary search.

So first we need to check two conditions first
jisme apan k ko first index aur last index se compare karenge toh ye 2 edge cases uss time handle hojayenge

1.Agar k jo hai chota hai mid value se aur first index se bhi chota hai toh high ko mid-1 ke barabar kardo

2.Agar k jo hai chota hai mid value se aur first index se bada hai toh low ko mid+1 ke barabar kardo

3.Agar k jo hai bada hai mid value se aur first index se bada hai toh low ko mid+1 ke barabar kardo

## 6.Book Allocation

Humare pass number of students hain aur books hain jo increasing order of pages me ek array me stored hain, hume nikalna hai minimum sum jo books ke pages ka ho jo ek single student ko allocate ho sake aur saare bachon me bhi distribute ho

