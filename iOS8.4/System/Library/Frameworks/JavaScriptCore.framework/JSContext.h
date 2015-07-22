/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <JavaScriptCore/JavaScriptCore-Structs.h>
@class JSVirtualMachine, JSWrapperMap, JSValue, NSString;

@interface JSContext : NSObject {

	JSVirtualMachine* m_virtualMachine;
	OpaqueJSContextRef m_context;
	JSWrapperMap* m_wrapperMap;
	Strong<JSC::JSObject>* m_exception;
	/*^block*/id exceptionHandler;

}

@property (retain,readonly) JSWrapperMap * wrapperMap; 
@property (readonly) JSValue * globalObject; 
@property (retain) JSValue * exception; 
@property (copy) id exceptionHandler; 
@property (readonly) JSVirtualMachine * virtualMachine; 
@property (copy) NSString * name; 
+(id)contextWithJSGlobalContextRef:(OpaqueJSContextRef)arg1 ;
+(id)currentThis;
+(id)currentCallee;
+(id)currentArguments;
+(id)currentContext;
-(id)valueFromNotifyException:(OpaqueJSValueRef)arg1 ;
-(void)notifyException:(OpaqueJSValueRef)arg1 ;
-(id)initWithGlobalContextRef:(OpaqueJSContextRef)arg1 ;
-(BOOL)boolFromNotifyException:(OpaqueJSValueRef)arg1 ;
-(void)beginCallbackWithData:(CallbackData*)arg1 calleeValue:(OpaqueJSValueRef)arg2 thisValue:(OpaqueJSValueRef)arg3 argumentCount:(unsigned long long)arg4 arguments:(const OpaqueJSValue*)arg5 ;
-(void)endCallbackWithData:(CallbackData*)arg1 ;
-(id)wrapperForObjCObject:(id)arg1 ;
-(id)wrapperForJSObject:(OpaqueJSValueRef)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)initWithVirtualMachine:(id)arg1 ;
-(void)setExceptionHandler:(id)arg1 ;
-(id)exceptionHandler;
-(id)evaluateScript:(id)arg1 withSourceURL:(id)arg2 ;
-(JSWrapperMap *)wrapperMap;
-(BOOL)_remoteInspectionEnabled;
-(void)_setRemoteInspectionEnabled:(BOOL)arg1 ;
-(BOOL)_includesNativeCallStackWhenReportingExceptions;
-(void)_setIncludesNativeCallStackWhenReportingExceptions:(BOOL)arg1 ;
-(CFRunLoopRef)_debuggerRunLoop;
-(void)_setDebuggerRunLoop:(CFRunLoopRef)arg1 ;
-(JSValue *)globalObject;
-(id)evaluateScript:(id)arg1 ;
-(JSValue *)exception;
-(void)dealloc;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(JSVirtualMachine *)virtualMachine;
-(OpaqueJSContextRef)JSGlobalContextRef;
-(void)setException:(JSValue *)arg1 ;
@end
