node {
    stage("Checkout") {
        git credentialsId: 'ssh', url: 'git@github.com:herychemo/QuickTestJenkinsFile.git'
    }
    stage("Run"){
        sh """
            bash ./someScript.sh
        """
    }
}