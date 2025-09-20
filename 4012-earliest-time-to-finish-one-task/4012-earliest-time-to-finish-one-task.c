int earliestTime(int** tasks, int tasksSize, int* tasksColSize) {
    int min=tasks[0][0]+tasks[0][1];
    for(int i=0;i<tasksSize;i++){
        if(min>(tasks[i][0]+tasks[i][1]))min=tasks[i][0]+tasks[i][1];
    }
    return min;
}