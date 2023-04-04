Ví dụ: Cho dãy A gồm 4 phần tử 10, 5, 14, 9. Hãy dùng giải thuật sắp xếp Selection Sort để minh họa.

Đầu tiên i=0. a0 = 10. Gán cho 10 là giá trị nhỏ nhất.

Chạy từ a1 đến a3 xét thấy a1 là phần tử nhỏ nhất ( min) nên đổi chỗ giữa a0 và a1.

Dãy mới: 5, 10, 14, 9.

Do đã tìm được phần tử nhỏ nhất của mảng đưa ra đầu mảng nên sẽ tăng i lên 1 đơn vị:

i=i+1=1. a1= 10.

Chạy từ a1 đến a3 xét thấy a3=9 là phần tử nhỏ nhất nên tiến hành đổi chỗ giữa a1 và a3.

Dãy mới: 5, 9, 14 , 10.

Tương tự từ a1 đến a3 không còn phần từ nào nhỏ hơn 9 nên i sẽ tăng lên 1 đơn vị:

i=i+1=2. a2=14.

Chạy từ a2 đến a3 xét thấy a3=10 là phần tử nhỏ nhất nên tiến hành đổi chỗ giữa a2 và a3.

Dãy mới: 5, 9, 10, 14.

Sau đó tăng i lên 1 đơn vị:

i=i+1=3. Do không thỏa i<n-1 nên chúng ta dừng giải thuật ở đây và nhận được dãy đã sắp xếp là:

5, 9, 10, 14.
