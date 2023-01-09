void state(int cs1, int cs2, int i1, int i2, int* ns1, int* ns2){
    *ns1 = i1 & (!cs2) | i1 & i2;
    *ns2 = i2 & (!cs1) | i1 & i2;
}

void output(int cs1, int cs2, int* o1, int* o2){
    *o1 = cs1;
    *o2 = cs2;
} 