function varargout = calculatorGUI(varargin)
% CALCULATORGUI MATLAB code for calculatorGUI.fig
%      CALCULATORGUI, by itself, creates a new CALCULATORGUI or raises the existing
%      singleton*.
%
%      H = CALCULATORGUI returns the handle to a new CALCULATORGUI or the handle to
%      the existing singleton*.
%
%      CALCULATORGUI('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in CALCULATORGUI.M with the given input arguments.
%
%      CALCULATORGUI('Property','Value',...) creates a new CALCULATORGUI or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before calculatorGUI_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to calculatorGUI_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help calculatorGUI

% Last Modified by GUIDE v2.5 20-Jan-2022 18:32:08

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @calculatorGUI_OpeningFcn, ...
                   'gui_OutputFcn',  @calculatorGUI_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin && ischar(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT


% --- Executes just before calculatorGUI is made visible.
function calculatorGUI_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to calculatorGUI (see VARARGIN)

% Choose default command line output for calculatorGUI
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes calculatorGUI wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = calculatorGUI_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;



function operand1_Callback(hObject, eventdata, handles)
% hObject    handle to operand1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of operand1 as text
%        str2double(get(hObject,'String')) returns contents of operand1 as a double


% --- Executes during object creation, after setting all properties.
function operand1_CreateFcn(hObject, eventdata, handles)
% hObject    handle to operand1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function operand2_Callback(hObject, eventdata, handles)
% hObject    handle to operand2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of operand2 as text
%        str2double(get(hObject,'String')) returns contents of operand2 as a double


% --- Executes during object creation, after setting all properties.
function operand2_CreateFcn(hObject, eventdata, handles)
% hObject    handle to operand2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function result_Callback(hObject, eventdata, handles)
% hObject    handle to result (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of result as text
%        str2double(get(hObject,'String')) returns contents of result as a double


% --- Executes during object creation, after setting all properties.
function result_CreateFcn(hObject, eventdata, handles)
% hObject    handle to result (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on selection change in operation.
function operation_Callback(hObject, eventdata, handles)
% hObject    handle to operation (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: contents = cellstr(get(hObject,'String')) returns operation contents as cell array
%        contents{get(hObject,'Value')} returns selected item from operation
    set(handles.errorMes,'String','');
    set(handles.result,'String','');
    switch(get(handles.operation,'value'))
        case 1 
            set(handles.selectedOp,'String','+');
        case 2 
            set(handles.selectedOp,'String','-');
        case 3
            set(handles.selectedOp,'String','/');
        case 4
            set(handles.selectedOp,'String','*');         
    end
            

% --- Executes during object creation, after setting all properties.
function operation_CreateFcn(hObject, eventdata, handles)
% hObject    handle to operation (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: listbox controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in equalButton.
function equalButton_Callback(hObject, eventdata, handles)
% hObject    handle to equalButton (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
    set(handles.errorMes,'String','');
    set(handles.result,'String','');
    op1 = get(handles.operand1,'String');
    op2 = get(handles.operand2,'String');
    operation = get(handles.selectedOp,'String');
    op1 = str2double(op1);
    op2 = str2double(op2);
    if (~isnan(op1) && ~isnan(op2)) 
        switch(operation)
                    case '+'
                        set(handles.result,'String',num2str(op1+op2));
                    case '-'
                        set(handles.result,'String',num2str(op1-op2));
                    case '/'
                        if ~op2
                            set(handles.errorMes,'String','Cannot Divide by Zero');
                        else
                            set(handles.result,'String',num2str(op1/op2)); 
                        end
                    case '*'
                        set(handles.result,'String',num2str(op1*op2));            
         end        
    else
        set(handles.errorMes,'String','Enter Operands');                          
    end

% --- Executes on selection change in listbox3.
function listbox3_Callback(hObject, eventdata, handles)
% hObject    handle to listbox3 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: contents = cellstr(get(hObject,'String')) returns listbox3 contents as cell array
%        contents{get(hObject,'Value')} returns selected item from listbox3
    set(handles.errorMes2,'String','');
    set(handles.result2,'String','');
    switch(get(handles.listbox3,'value'))
        case 1 
            set(handles.selectedOp2,'String','+');
        case 2 
            set(handles.selectedOp2,'String','-');
        case 3
            set(handles.selectedOp2,'String','/');
        case 4
            set(handles.selectedOp2,'String','*');         
    end

% --- Executes during object creation, after setting all properties.
function listbox3_CreateFcn(hObject, eventdata, handles)
% hObject    handle to listbox3 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: listbox controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in equalButton2.
function equalButton2_Callback(hObject, eventdata, handles)
% hObject    handle to equalButton2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
    set(handles.errorMes2,'String','');
    set(handles.result2,'String','');
    op1 = get(handles.matrix1,'String');
    op2 = get(handles.matrix2,'String');
    operation = get(handles.selectedOp2,'String');
    op1 = str2num(op1);
    op2 = str2num(op2);
    if( ~isempty(op1) && ~isempty(op2) )
        if (~all(size(op1)==size(op2)))
            set(handles.errorMes2,'String','Matrix dimensions must agree');            
        else
            switch(operation)
                case '+'
                    set(handles.result2,'String',num2str(op1+op2));
                case '-'
                    set(handles.result2,'String',num2str(op1-op2));
                case '/'
                    if ~all(op2)
                        set(handles.errorMes2,'String','Cannot Divide by Zero');
                    else
                        set(handles.result2,'String',num2str(op1./op2)); 
                    end
                case '*'
                    set(handles.result2,'String',num2str(op1.*op2));            
            end            
        end            
    else         
        set(handles.errorMes2,'String','Enter Matrices');        
    end
        

% --- Executes on button press in radiobutton4.
function radiobutton4_Callback(hObject, eventdata, handles)
% hObject    handle to radiobutton4 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of radiobutton4


% --- Executes on button press in EnterButton.
function EnterButton_Callback(hObject, eventdata, handles)
% hObject    handle to EnterButton (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
    global fig;
    set(handles.errorMes2,'String','');             
    selectedOption=get(handles.buttonGroup,'SelectedObject');
    switch(get(selectedOption,'String'))
        case 'x axis'
            x = str2num(get(handles.matrix1, "String")); 
            fig = plot(x,0,'*g');        %plot points on x_axis --> y=0     
            ylim([0 1])    
        case 'y axis'
            y = str2num(get(handles.matrix2, "String"));
            fig = plot(0,y,'*g');
            xlim([0 1])
        case 'x y axis'   %plot x versus y
            x = str2num(get(handles.matrix1, "String")); 
            y = str2num(get(handles.matrix2, "String"));
            fig = plot(x,y,'*g');
        case 'resultant'
            fig = plot(str2num(get(handles.result2, "String")),0,'*g');
            ylim([0 1]);
        case 'sin'
            x = 0:0.01:360;
            y = sind(x);
            fig = plot(x,y,'g');
            xlim([0 360]);
        case 'cosine'
            x = 0:0.01:360;
            y = cosd(x);
            fig = plot(x,y,'g');
            xlim([0 360]);
        case 'equation'
            try
                fig = fplot(str2sym(get(handles.eq, "String")));
            catch
                try
                    fig = fimplicit(str2sym(get(handles.eq, "String")));  
                catch
                    set(handles.errorMes2,'String','Check the Equation');             
                end
            end
    end
    
        
% --- Executes on button press in deleteButton.
function deleteButton_Callback(hObject, eventdata, handles)
% hObject    handle to deleteButton (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
    global fig;
    delete(fig);
    