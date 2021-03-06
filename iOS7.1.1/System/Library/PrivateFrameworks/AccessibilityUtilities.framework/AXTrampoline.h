/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:38 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface AXTrampoline : NSObject {

	bool _warnAboutUnknownSelectors;
	id _caller;
	Class _targetClass;

}

@property (assign,nonatomic) bool warnAboutUnknownSelectors;              //@synthesize warnAboutUnknownSelectors=_warnAboutUnknownSelectors - In the implementation block
@property (assign,nonatomic) id caller;                                   //@synthesize caller=_caller - In the implementation block
@property (assign,nonatomic) Class targetClass;                           //@synthesize targetClass=_targetClass - In the implementation block
+(void)methodDoesNotExistSentinal;
+(id)methodNotFoundSentinal;
+(id)trampolineWithCaller:(id)arg1 targetClass:(Class)arg2 ;
-(void)dealloc;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithCaller:(id)arg1 targetClass:(Class)arg2 ;
-(void)setCaller:(id)arg1 ;
-(void)setTargetClass:(Class)arg1 ;
-(id)caller;
-(Class)targetClass;
-(bool)warnAboutUnknownSelectors;
-(/*function pointer*/ void*)_findIMPForSelector:(SEL)arg1 ;
-(bool)callerIsClass;
-(void)setWarnAboutUnknownSelectors:(bool)arg1 ;
@end

