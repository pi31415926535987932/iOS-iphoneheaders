/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:56 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WebBookmark;

@interface ReadingListCompletionItem : NSObject {

	WebBookmark* _bookmark;

}
-(id)completionTableViewCellReuseIdentifier;
-(void)acceptCompletionWithActionHandler:(id)arg1 ;
-(id)completionTableViewCell;
-(void)configureCompletionTableViewCell:(id)arg1 forCompletionList:(id)arg2 ;
-(void)auditAcceptedCompletionWithRank:(unsigned)arg1 ;
-(id)initWithReadingListBookmark:(id)arg1 ;
@end

