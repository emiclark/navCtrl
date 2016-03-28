//
//  EditCompanyViewController.h
//  NavCtrl
// Assignment6-SQL
// Integrate SQL
//
//  Created by Emiko Clark on 2/29/16.
//  Copyright © 2016 Aditya Narayan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DAO.h"
#import "Company.h"
#import "CompanyViewController.h"
@class CompanyViewController;

@interface EditCompanyViewController : UIViewController

@property (retain,nonatomic) DAO *dao;
@property (retain, nonatomic) Company *currentCompany;

@property (retain, nonatomic) CompanyViewController *companyViewController;

@property (retain, nonatomic) IBOutlet UILabel *label;
@property (retain, nonatomic) IBOutlet UITextField *name;
@property (retain, nonatomic) IBOutlet UITextField *stockSymbol;

@property (retain, nonatomic) IBOutlet UITextField *logo;
@property (retain, nonatomic) IBOutlet UIButton *saveButton;

- (IBAction)SaveButtonTapped:(UIButton *)sender;

@end
