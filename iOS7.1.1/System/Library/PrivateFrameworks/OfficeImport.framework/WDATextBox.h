/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WDText, WDDocument, WDAContent;

@interface WDATextBox : NSObject {

	WDText* mText;
	unsigned long long mNextTextBoxId;
	bool mOle;
	WDDocument* mDocument;
	WDAContent* mParent;

}
-(void)dealloc;
-(id)init;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)document;
-(void)setDocument:(id)arg1 ;
-(unsigned long long)nextTextBoxId;
-(void)setOle:(bool)arg1 ;
-(void)setNextTextBoxId:(unsigned long long)arg1 ;
-(bool)isOle;
-(void)setParent:(id)arg1 ;
-(id)parent;
@end

