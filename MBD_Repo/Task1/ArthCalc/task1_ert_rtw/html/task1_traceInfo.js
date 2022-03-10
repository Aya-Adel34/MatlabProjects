function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/In1 */
	this.urlHashMap["task1:6"] = "task1.c:33,40,47,54&task1.h:38";
	/* <Root>/In2 */
	this.urlHashMap["task1:7"] = "task1.c:34,41,48,55&task1.h:39";
	/* <Root>/Add */
	this.urlHashMap["task1:3"] = "task1.c:49";
	/* <Root>/Divide1 */
	this.urlHashMap["task1:5"] = "task1.c:42";
	/* <Root>/Product */
	this.urlHashMap["task1:1"] = "task1.c:35";
	/* <Root>/Subtract */
	this.urlHashMap["task1:4"] = "task1.c:56";
	/* <Root>/Out1 */
	this.urlHashMap["task1:8"] = "task1.c:32&task1.h:44";
	/* <Root>/Out2 */
	this.urlHashMap["task1:9"] = "task1.c:39&task1.h:45";
	/* <Root>/Out3 */
	this.urlHashMap["task1:10"] = "task1.c:46&task1.h:46";
	/* <Root>/Out4 */
	this.urlHashMap["task1:11"] = "task1.c:53&task1.h:47";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "task1"};
	this.sidHashMap["task1"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "task1:6"};
	this.sidHashMap["task1:6"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/In2"] = {sid: "task1:7"};
	this.sidHashMap["task1:7"] = {rtwname: "<Root>/In2"};
	this.rtwnameHashMap["<Root>/Add"] = {sid: "task1:3"};
	this.sidHashMap["task1:3"] = {rtwname: "<Root>/Add"};
	this.rtwnameHashMap["<Root>/Divide1"] = {sid: "task1:5"};
	this.sidHashMap["task1:5"] = {rtwname: "<Root>/Divide1"};
	this.rtwnameHashMap["<Root>/Product"] = {sid: "task1:1"};
	this.sidHashMap["task1:1"] = {rtwname: "<Root>/Product"};
	this.rtwnameHashMap["<Root>/Subtract"] = {sid: "task1:4"};
	this.sidHashMap["task1:4"] = {rtwname: "<Root>/Subtract"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "task1:8"};
	this.sidHashMap["task1:8"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<Root>/Out2"] = {sid: "task1:9"};
	this.sidHashMap["task1:9"] = {rtwname: "<Root>/Out2"};
	this.rtwnameHashMap["<Root>/Out3"] = {sid: "task1:10"};
	this.sidHashMap["task1:10"] = {rtwname: "<Root>/Out3"};
	this.rtwnameHashMap["<Root>/Out4"] = {sid: "task1:11"};
	this.sidHashMap["task1:11"] = {rtwname: "<Root>/Out4"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
