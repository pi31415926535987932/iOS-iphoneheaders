/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:26 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBWidgetViewControllerDelegate <NSObject>
@optional
-(void)remoteViewControllerDidConnectForWidget:(id)arg1;
-(void)widget:(id)arg1 requestsLaunchOfURL:(id)arg2;
-(void)widget:(id)arg1 requestsPresentationOfViewController:(id)arg2 presentationStyle:(int)arg3 context:(id)arg4 completion:(/*^block*/id)arg5;
-(/*^block*/id)widget:(id)arg1 didUpdatePreferredHeight:(float)arg2 completion:(/*^block*/id)arg3;
-(void)contentAvailabilityDidChangeForWidget:(id)arg1;
-(char)shouldRequestWidgetRemoteViewControllers;
-(char)widgetShouldAttemptReconnectionAfterUnanticipatedDisconnection:(id)arg1;
-(int)activeLayoutModeForWidget:(id)arg1;

@end
