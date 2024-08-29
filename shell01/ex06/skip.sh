ls -l | awk -F':' 'NR%2 {print $0}'
