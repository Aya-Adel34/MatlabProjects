function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/In1 */
	this.urlHashMap["task2:11"] = "task2.c:33,40,47,54,62&task2.h:38";
	/* <Root>/In2 */
	this.urlHashMap["task2:12"] = "task2.c:34,41,48,55,68&task2.h:39";
	/* <Root>/Bitwise
Operator */
	this.urlHashMap["task2:2"] = "task2.c:35";
	/* <Root>/Bitwise
Operator1 */
	this.urlHashMap["task2:3"] = "task2.c:42";
	/* <Root>/Bitwise
Operator2 */
	this.urlHashMap["task2:4"] = "task2.c:49";
	/* <Root>/Bitwise
Operator3 */
	this.urlHashMap["task2:5"] = "task2.c:63";
	/* <Root>/Bitwise
Operator4 */
	this.urlHashMap["task2:6"] = "task2.c:56";
	/* <Root>/Bitwise
Operator5 */
	this.urlHashMap["task2:10"] = "task2.c:69";
	/* <Root>/Bitwise
Operator6 */
	this.urlHashMap["task2:8"] = "task2.c:57";
	/* <Root>/Out1 */
	this.urlHashMap["task2:13"] = "task2.c:32&task2.h:44";
	/* <Root>/Out2 */
	this.urlHashMap["task2:14"] = "task2.c:39&task2.h:45";
	/* <Root>/Out3 */
	this.urlHashMap["task2:15"] = "task2.c:46&task2.h:46";
	/* <Root>/Out4 */
	this.urlHashMap["task2:16"] = "task2.c:53&task2.h:47";
	/* <Root>/Out5 */
	this.urlHashMap["task2:17"] = "task2.c:61&task2.h:48";
	/* <Root>/Out6 */
	this.urlHashMap["task2:18"] = "task2.c:67&task2.h:49";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "task2"};
	this.sidHashMap["task2"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "task2:11"};
	this.sidHashMap["task2:11"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/In2"] = {sid: "task2:12"};
	this.sidHashMap["task2:12"] = {rtwname: "<Root>/In2"};
	this.rtwnameHashMap["<Root>/Bitwise Operator"] = {sid: "task2:2"};
	this.sidHashMap["task2:2"] = {rtwname: "<Root>/Bitwise Operator"};
	this.rtwnameHashMap["<Root>/Bitwise Operator1"] = {sid: "task2:3"};
	this.sidHashMap["task2:3"] = {rtwname: "<Root>/Bitwise Operator1"};
	this.rtwnameHashMap["<Root>/Bitwise Operator2"] = {sid: "task2:4"};
	this.sidHashMap["task2:4"] = {rtwname: "<Root>/Bitwise Operator2"};
	this.rtwnameHashMap["<Root>/Bitwise Operator3"] = {sid: "task2:5"};
	this.sidHashMap["task2:5"] = {rtwname: "<Root>/Bitwise Operator3"};
	this.rtwnameHashMap["<Root>/Bitwise Operator4"] = {sid: "task2:6"};
	this.sidHashMap["task2:6"] = {rtwname: "<Root>/Bitwise Operator4"};
	this.rtwnameHashMap["<Root>/Bitwise Operator5"] = {sid: "task2:10"};
	this.sidHashMap["task2:10"] = {rtwname: "<Root>/Bitwise Operator5"};
	this.rtwnameHashMap["<Root>/Bitwise Operator6"] = {sid: "task2:8"};
	this.sidHashMap["task2:8"] = {rtwname: "<Root>/Bitwise Operator6"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "task2:13"};
	this.sidHashMap["task2:13"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<Root>/Out2"] = {sid: "task2:14"};
	this.sidHashMap["task2:14"] = {rtwname: "<Root>/Out2"};
	this.rtwnameHashMap["<Root>/Out3"] = {sid: "task2:15"};
	this.sidHashMap["task2:15"] = {rtwname: "<Root>/Out3"};
	this.rtwnameHashMap["<Root>/Out4"] = {sid: "task2:16"};
	this.sidHashMap["task2:16"] = {rtwname: "<Root>/Out4"};
	this.rtwnameHashMap["<Root>/Out5"] = {sid: "task2:17"};
	this.sidHashMap["task2:17"] = {rtwname: "<Root>/Out5"};
	this.rtwnameHashMap["<Root>/Out6"] = {sid: "task2:18"};
	this.sidHashMap["task2:18"] = {rtwname: "<Root>/Out6"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
