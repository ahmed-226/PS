SELECT 
    s.student_id,
    s.student_name,
    sb.subject_name,
    COUNT(e.student_id) as attended_exams
FROM students s
CROSS JOIN subjects sb
LEFT JOIN examinations e ON s.student_id = e.student_id 
                        AND sb.subject_name = e.subject_name
GROUP BY s.student_id, s.student_name, sb.subject_name
ORDER BY s.student_id, sb.subject_name;