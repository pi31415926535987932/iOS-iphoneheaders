/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:28 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BKProcessAssertionDelegate
@required
-(id)processAssertionDelegateDescription:(id)arg1;
-(void)processAssertion:(id)arg1 preventTaskSuspendChanged:(BOOL)arg2;
-(void)processAssertion:(id)arg1 preventCPUThrottleDownChanged:(BOOL)arg2;
-(void)processAssertion:(id)arg1 preventUIThrottleDownChanged:(BOOL)arg2;
-(void)processAssertion:(id)arg1 preventIdleSleepChanged:(BOOL)arg2;
-(void)processAssertion:(id)arg1 wantsForegroundResourcePriorityCountChange:(BOOL)arg2;
-(void)processAssertion:(id)arg1 preventSuspendOnSleepChanged:(BOOL)arg2;
-(void)processAssertionInvalidated:(id)arg1;
@end

