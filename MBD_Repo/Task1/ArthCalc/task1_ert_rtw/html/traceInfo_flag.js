function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["task1.c:37c30"]=1;
    this.traceFlag["task1.c:44c30"]=1;
    this.traceFlag["task1.c:51c30"]=1;
    this.traceFlag["task1.c:58c30"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
