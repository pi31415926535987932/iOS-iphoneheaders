/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:33:19 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, ACAccount, NSArray, ACDataclassAction;

@interface ACUIDataclassActionPicker : NSObject {

	NSMutableArray* _affectedDataclasses;
	ACAccount* _affectedAccount;
	NSArray* _actions;

}

@property (nonatomic,readonly) NSArray * actions;                                       //@synthesize actions=_actions - In the implementation block
@property (nonatomic,copy) NSArray * affectedDataclasses;                               //@synthesize affectedDataclasses=_affectedDataclasses - In the implementation block
@property (nonatomic,readonly) ACAccount * affectedAccount;                             //@synthesize affectedAccount=_affectedAccount - In the implementation block
@property (nonatomic,readonly) char hasDestructiveActions; 
@property (nonatomic,readonly) ACDataclassAction * firstDestructiveAction; 
@property (nonatomic,readonly) int priorityIndex; 
-(NSArray *)actions;
-(id)title;
-(id)message;
-(id)showInViewController:(id)arg1 ;
-(ACDataclassAction *)firstDestructiveAction;
-(char)hasDestructiveActions;
-(id)descriptionForDataclassAction:(id)arg1 ;
-(NSArray *)affectedDataclasses;
-(char)hasActionOfType:(int)arg1 ;
-(ACAccount *)affectedAccount;
-(id)initWithActions:(id)arg1 affectingAccount:(id)arg2 ;
-(void)addAffectedDataclass:(id)arg1 ;
-(int)priorityIndex;
-(void)setAffectedDataclasses:(NSArray *)arg1 ;
@end

