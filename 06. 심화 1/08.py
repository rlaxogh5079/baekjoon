import sys

score = 0.0
subject_time = 0.0
data_dict = {
    'A+': 4.5,
    'A0': 4.0,
    'B+': 3.5,
    'B0': 3.0,
    'C+': 2.5,
    'C0': 2.0,
    'D+': 1.5,
    'D0': 1.0,
    'F': 0.0
}
for _ in range(20):
    name, credit, grade = sys.stdin.readline().split()
    if grade != 'P':
        score += data_dict[grade] * float(credit)
        subject_time += float(credit)

print("%.4f" % (score / subject_time))