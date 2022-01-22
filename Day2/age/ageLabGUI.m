function varargout = ageLabGUI(varargin)
% AGELABGUI MATLAB code for ageLabGUI.fig
%      AGELABGUI, by itself, creates a new AGELABGUI or raises the existing
%      singleton*.
%
%      H = AGELABGUI returns the handle to a new AGELABGUI or the handle to
%      the existing singleton*.
%
%      AGELABGUI('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in AGELABGUI.M with the given input arguments.
%
%      AGELABGUI('Property','Value',...) creates a new AGELABGUI or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before ageLabGUI_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to ageLabGUI_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help ageLabGUI

% Last Modified by GUIDE v2.5 20-Jan-2022 23:36:58

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @ageLabGUI_OpeningFcn, ...
                   'gui_OutputFcn',  @ageLabGUI_OutputFcn, ...
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

global sadImg;
global happyImg;
sadImg = imread ('sad.jpg');
happyImg = imread ('happy.jpg');

% End initialization code - DO NOT EDIT


% --- Executes just before ageLabGUI is made visible.
function ageLabGUI_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to ageLabGUI (see VARARGIN)

% Choose default command line output for ageLabGUI
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes ageLabGUI wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = ageLabGUI_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;



function ageLabel_Callback(hObject, eventdata, handles)
% hObject    handle to ageLabel (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of ageLabel as text
%        str2double(get(hObject,'String')) returns contents of ageLabel as a double


% --- Executes during object creation, after setting all properties.
function ageLabel_CreateFcn(hObject, eventdata, handles)
% hObject    handle to ageLabel (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in getImageButton.
function getImageButton_Callback(hObject, eventdata, handles)
% hObject    handle to getImageButton (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
    age = get(handles.ageLabel,'String');
    age = str2double(age);
    axes(handles.imgAxes);
    if age <= 60
        global happyImg;
        imshow(happyImg);
    else 
        global sadImg;
        imshow(sadImg);       
    end


% --- Executes during object creation, after setting all properties.
function imgAxes_CreateFcn(hObject, eventdata, handles)
% hObject    handle to imgAxes (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: place code in OpeningFcn to populate imgAxes
